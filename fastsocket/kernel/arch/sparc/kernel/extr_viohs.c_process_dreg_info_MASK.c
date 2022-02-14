
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vio_driver_state {int dr_state; struct vio_dring_state* drings; int desc_buf_len; int desc_buf; } ;
struct vio_dring_state {int ncookies; scalar_t__ ident; TYPE_1__* cookies; int entry_size; int num_entries; } ;
struct TYPE_4__ {int stype; } ;
struct vio_dring_register {int num_cookies; TYPE_2__ tag; scalar_t__ dring_ident; TYPE_1__* cookies; int descr_size; int num_descr; int options; } ;
struct ldc_trans_cookie {int dummy; } ;
struct TYPE_3__ {scalar_t__ cookie_size; scalar_t__ cookie_addr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct vio_driver_state*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct vio_driver_state*,TYPE_2__*,int) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static int FUNC_5(struct vio_driver_state *VAR_7,
        struct vio_dring_register *VAR_8)
{
 struct vio_dring_state *VAR_9;
 int VAR_10, VAR_11;

 FUNC_4(VAR_1, "GOT DRING_REG INFO ident[%llx] "
        "ndesc[%u] dsz[%u] opt[0x%x] ncookies[%u]\n",
        (unsigned long long) VAR_8->dring_ident,
        VAR_8->num_descr, VAR_8->descr_size, VAR_8->options,
        VAR_8->num_cookies);

 if (!(VAR_7->dr_state & VAR_4))
  goto send_nack;

 if (VAR_7->dr_state & VAR_3)
  goto send_nack;

 FUNC_0(VAR_7->desc_buf);

 VAR_7->desc_buf = FUNC_2(VAR_8->descr_size, VAR_0);
 if (!VAR_7->desc_buf)
  goto send_nack;

 VAR_7->desc_buf_len = VAR_8->descr_size;

 VAR_9 = &VAR_7->drings[VAR_2];

 VAR_9->num_entries = VAR_8->num_descr;
 VAR_9->entry_size = VAR_8->descr_size;
 VAR_9->ncookies = VAR_8->num_cookies;
 for (VAR_10 = 0; VAR_10 < VAR_9->ncookies; VAR_10++) {
  VAR_9->cookies[VAR_10] = VAR_8->cookies[VAR_10];

  FUNC_4(VAR_1, "DRING COOKIE(%d) [%016llx:%016llx]\n",
         VAR_10,
         (unsigned long long)
         VAR_8->cookies[VAR_10].cookie_addr,
         (unsigned long long)
         VAR_8->cookies[VAR_10].cookie_size);
 }

 VAR_8->tag.stype = VAR_5;
 VAR_8->dring_ident = ++VAR_9->ident;

 FUNC_4(VAR_1, "SEND DRING_REG ACK ident[%llx]\n",
        (unsigned long long) VAR_8->dring_ident);

 VAR_11 = (sizeof(*VAR_8) +
        (VAR_9->ncookies * sizeof(struct ldc_trans_cookie)));
 if (FUNC_3(VAR_7, &VAR_8->tag, VAR_11) < 0)
  goto send_nack;

 VAR_7->dr_state |= VAR_3;

 return 0;

send_nack:
 VAR_8->tag.stype = VAR_6;
 FUNC_4(VAR_1, "SEND DRING_REG NACK\n");
 (void) FUNC_3(VAR_7, &VAR_8->tag, sizeof(*VAR_8));

 return FUNC_1(VAR_7);
}
