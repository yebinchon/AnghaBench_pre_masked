
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(int VAR_0)
{




 if (VAR_0 < 0x800) {

  VAR_0 = (100*256 * VAR_0 + 231245/2) / 231245;
 } else {

  int VAR_1 = (VAR_0*4 + 16*1024 + 58)/116;
  VAR_0 = 25 * ((VAR_1 * VAR_1 * VAR_1 + 0x100000/2) / 0x100000);
 }

 FUNC_1(FUNC_0(4), VAR_0);

 return VAR_0;
}
