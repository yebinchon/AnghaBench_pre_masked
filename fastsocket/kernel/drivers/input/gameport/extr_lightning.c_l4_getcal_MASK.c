
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(int VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8 = -1;

 FUNC_2(VAR_3, VAR_2);
 FUNC_2(VAR_4 + (VAR_5 >> 2), VAR_2);
 if (FUNC_0(VAR_2) & VAR_0)
  goto out;

 FUNC_2(VAR_1, VAR_2);
 if (FUNC_1())
  goto out;

 if (FUNC_0(VAR_2) != VAR_4 + (VAR_5 >> 2))
  goto out;

 if (FUNC_1())
  goto out;
        FUNC_2(VAR_5 & 3, VAR_2);

 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  if (FUNC_1())
   goto out;
  VAR_6[VAR_7] = FUNC_0(VAR_2);
 }

 VAR_8 = 0;

out: FUNC_2(VAR_3, VAR_2);
 return VAR_8;
}
