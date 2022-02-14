
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int FUNC_0 (int,char*,int,...) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(int VAR_1, unsigned long VAR_2, void *VAR_3, size_t VAR_4,
 size_t VAR_5, int VAR_6)
{
 u_long VAR_7;
 unsigned short *VAR_8 = (unsigned short *)VAR_3;
 unsigned long VAR_9;

 FUNC_0(3, "m32r_cfc: pcc_ioread_word: sock=%d, port=%#lx, "
   "buf=%p, size=%u, nmemb=%d, flag=%d\n",
   VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 if (VAR_4 != 2)
  FUNC_2("m32r_cfc: ioread_word :illigal size %u : %#lx\n", VAR_4,
   VAR_2);
 if (VAR_4 == 9)
  FUNC_2("m32r_cfc: ioread_word :insw \n");

 VAR_7 = FUNC_1(VAR_2, 2);
 if (!VAR_7) {
  FUNC_2("m32r_cfc:ioread_word null port :%#lx\n",VAR_2);
  return;
 }
 FUNC_0(3, "m32r_cfc: pcc_ioread_word: addr=%#lx\n", VAR_7);

 FUNC_4(&VAR_0, VAR_9);

 while (VAR_5--)
  *VAR_8++ = FUNC_3(VAR_7);
 FUNC_5(&VAR_0, VAR_9);
}
