
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(int VAR_0) {

 int VAR_1 = VAR_0 ? VAR_0 : 1;

 if (!FUNC_0(VAR_1)) {
  while (!FUNC_0(VAR_0)) {






   VAR_0 = VAR_0 & (VAR_0 -1);
  }


  if (0 == (VAR_0 << 1)) {
   VAR_1 = VAR_0;
  } else {
   VAR_1 = VAR_0 << 1;
  }
 }

 return (VAR_1);
}
