
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(u64 VAR_4)
{
 int VAR_5 = -1;

 if (VAR_4 < 32)
  VAR_5 = VAR_0;
 else if (VAR_4 < 64)
  VAR_5 = VAR_3;
 else if (VAR_4 < 128)
  VAR_5 = VAR_1;
 else if (VAR_4 < 256)
  VAR_5 = VAR_2;

 return VAR_5;
}
