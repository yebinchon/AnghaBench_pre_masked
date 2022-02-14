
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int,int ,int) ;

void FUNC_3(int VAR_3)
{
 int VAR_4 = 0;

 VAR_3 = VAR_3 ? 1 : 0;
 VAR_4 |= FUNC_2(VAR_0, VAR_3, VAR_1[0], 320*240*2);
 VAR_4 |= FUNC_2(VAR_0, VAR_3, VAR_1[1], 320*240*2);
 VAR_4 |= FUNC_2(VAR_0, VAR_3, VAR_1[2], 320*240*2);
 VAR_4 |= FUNC_2(VAR_0, VAR_3, VAR_1[3], 320*240*2);

 if (VAR_4)
  FUNC_0(VAR_2, "could not make fb buferable.\n");
 else
  FUNC_1("made fb buferable.\n");
}
