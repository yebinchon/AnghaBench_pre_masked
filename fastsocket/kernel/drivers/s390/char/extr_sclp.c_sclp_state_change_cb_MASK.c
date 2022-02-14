
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sclp_statechangebuf {int mask_length; int sclp_active_facility_mask; scalar_t__ validity_sclp_active_facility_mask; int sclp_send_mask; scalar_t__ validity_sclp_send_mask; int sclp_receive_mask; scalar_t__ validity_sclp_receive_mask; } ;
struct evbuf_header {int dummy; } ;
typedef int sccb_mask_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_3(struct evbuf_header *VAR_4)
{
 unsigned long VAR_5;
 struct sclp_statechangebuf *VAR_6;

 VAR_6 = (struct sclp_statechangebuf *) VAR_4;
 if (VAR_6->mask_length != sizeof(sccb_mask_t))
  return;
 FUNC_1(&VAR_1, VAR_5);
 if (VAR_6->validity_sclp_receive_mask)
  VAR_2 = VAR_6->sclp_receive_mask;
 if (VAR_6->validity_sclp_send_mask)
  VAR_3 = VAR_6->sclp_send_mask;
 FUNC_2(&VAR_1, VAR_5);
 if (VAR_6->validity_sclp_active_facility_mask)
  VAR_0 = VAR_6->sclp_active_facility_mask;
 FUNC_0();
}
