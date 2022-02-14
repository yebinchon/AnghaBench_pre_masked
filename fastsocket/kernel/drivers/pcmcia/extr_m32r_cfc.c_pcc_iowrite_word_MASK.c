
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int FUNC_0 (int,char*,int,...) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int) ;

void FUNC_6(int VAR_1, unsigned long VAR_2, void *VAR_3, size_t VAR_4,
 size_t VAR_5, int VAR_6)
{
 u_long VAR_7;
 unsigned short *VAR_8 = (unsigned short *)VAR_3;
 unsigned long VAR_9;

 FUNC_0(3, "m32r_cfc: pcc_iowrite_word: sock=%d, port=%#lx, "
   "buf=%p, size=%u, nmemb=%d, flag=%d\n",
   VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 if(VAR_4 != 2)
  FUNC_2("m32r_cfc: iowrite_word :illigal size %u : %#lx\n",
   VAR_4, VAR_2);
 if(VAR_4 == 9)
  FUNC_2("m32r_cfc: iowrite_word :outsw \n");

 VAR_7 = FUNC_1(VAR_2, 2);
 if (!VAR_7) {
  FUNC_2("m32r_cfc:iowrite_word null addr :%#lx\n",VAR_2);
  return;
 }

 if (VAR_7 & 1) {
  FUNC_2("m32r_cfc:iowrite_word port addr (%#lx):%#lx\n", VAR_2,
   VAR_7);
  return;
 }

 FUNC_0(3, "m32r_cfc: pcc_iowrite_word: addr=%#lx\n", VAR_7);

 FUNC_3(&VAR_0, VAR_9);
 while (VAR_5--)
  FUNC_5(*VAR_8++, VAR_7);
 FUNC_4(&VAR_0, VAR_9);
}
