
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int value; int disabled; } ;
union iwreq_data {TYPE_1__ nwid; } ;
struct net_device {unsigned int base_addr; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_9__ {int* psa_nwid; int psa_nwid_select; } ;
typedef TYPE_3__ psa_t ;
struct TYPE_10__ {int spinlock; } ;
typedef TYPE_4__ net_local ;
struct TYPE_8__ {int mmw_netw_id_l; int mmw_netw_id_h; } ;
struct TYPE_11__ {TYPE_2__ w; } ;
typedef TYPE_5__ mm_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ,int) ;
 int FUNC_1 (unsigned int,int,unsigned char*,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 TYPE_4__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int,unsigned char*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2,
       struct iw_request_info *VAR_3,
       union iwreq_data *VAR_4,
       char *VAR_5)
{
 unsigned int VAR_6 = VAR_2->base_addr;
 net_local *VAR_7 = FUNC_3(VAR_2);
 psa_t VAR_8;
 mm_t VAR_9;
 unsigned long VAR_10;
 int VAR_11 = 0;


 FUNC_5(&VAR_7->spinlock, VAR_10);


 if (!VAR_4->nwid.disabled) {

  VAR_8.psa_nwid[0] = (VAR_4->nwid.value & 0xFF00) >> 8;
  VAR_8.psa_nwid[1] = VAR_4->nwid.value & 0xFF;
  VAR_8.psa_nwid_select = 0x01;
  FUNC_4(VAR_2,
     (char *) VAR_8.psa_nwid - (char *) &VAR_8,
     (unsigned char *) VAR_8.psa_nwid, 3);


  VAR_9.w.mmw_netw_id_l = VAR_8.psa_nwid[1];
  VAR_9.w.mmw_netw_id_h = VAR_8.psa_nwid[0];
  FUNC_1(VAR_6,
     (char *) &VAR_9.w.mmw_netw_id_l -
     (char *) &VAR_9,
     (unsigned char *) &VAR_9.w.mmw_netw_id_l, 2);
  FUNC_0(VAR_6, FUNC_2(0, VAR_1), 0x00);
 } else {

  VAR_8.psa_nwid_select = 0x00;
  FUNC_4(VAR_2,
     (char *) &VAR_8.psa_nwid_select -
     (char *) &VAR_8,
     (unsigned char *) &VAR_8.psa_nwid_select,
     1);


  FUNC_0(VAR_6, FUNC_2(0, VAR_1),
   VAR_0);
 }

 FUNC_7(VAR_2);


 FUNC_6(&VAR_7->spinlock, VAR_10);

 return VAR_11;
}
