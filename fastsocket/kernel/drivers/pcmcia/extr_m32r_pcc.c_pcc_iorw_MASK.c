
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_3__ {int mapaddr; int ioaddr; scalar_t__ current_space; int last_iodbex; int flags; size_t last_iosize; } ;
typedef TYPE_1__ pcc_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 void* VAR_12 ;
 int FUNC_0 (int,int ) ;
 int VAR_13 ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (char*,unsigned long,size_t) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 TYPE_1__* VAR_14 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (unsigned short,int) ;

void FUNC_9(int VAR_15, unsigned long VAR_16, void *VAR_17, size_t VAR_18, size_t VAR_19, int VAR_20, int VAR_21)
{
 u_long VAR_22;
 u_long VAR_23;
 int VAR_24;



 pcc_socket_t *VAR_25 = &VAR_14[VAR_15];





 FUNC_5(&VAR_13, VAR_23);




 VAR_24 = (VAR_18 > 1 && VAR_21 == 0) ? VAR_9 : 0;
 VAR_22 = VAR_25->mapaddr + VAR_16 - VAR_25->ioaddr + VAR_0;




 if (VAR_25->current_space != VAR_11 || VAR_25->last_iodbex != VAR_24) {

  u_long VAR_26;




  FUNC_1(VAR_15, VAR_3, 0);




  VAR_26 = (VAR_25->flags & VAR_1) ? 0 : VAR_8;
  FUNC_1(VAR_15, VAR_6, VAR_7 | VAR_26 | VAR_24);
  FUNC_1(VAR_15, VAR_2, VAR_22 & 0x1ff00000);




  FUNC_1(VAR_15, VAR_3, 1);
  VAR_25->current_space = VAR_11;
 }




 if (VAR_18 == 1) {

  unsigned char *VAR_27 = (unsigned char *)VAR_17;






  if (VAR_20) {

   while (VAR_19--) {
    FUNC_7(*VAR_27++, VAR_22);
   }
  } else {

   while (VAR_19--) {
       *VAR_27++ = FUNC_3(VAR_22);
   }
  }
 } else {

  unsigned short *VAR_28 = (unsigned short *)VAR_17;






  if (VAR_20) {

   while (VAR_19--) {
    FUNC_8(*VAR_28++, VAR_22);
      }
     } else {

      while (VAR_19--) {
    *VAR_28++ = FUNC_4(VAR_22);
      }
     }
 }



 if ((VAR_22 = FUNC_0(VAR_15, VAR_4)) & VAR_5) {
   FUNC_2("m32r_pcc: BWERR detected : port 0x%04lx : iosize %dbit\n",
    VAR_16, VAR_18 * 8);
   FUNC_1(VAR_15, VAR_4, VAR_22);
 }




 VAR_25->last_iosize = VAR_18;
 VAR_25->last_iodbex = VAR_24;



 FUNC_6(&VAR_13,VAR_23);

 return;
}
