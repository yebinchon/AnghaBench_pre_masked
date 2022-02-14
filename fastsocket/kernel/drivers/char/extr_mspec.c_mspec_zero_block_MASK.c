
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned long VAR_5 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,unsigned long,int,int,int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (int ) ;
 int * VAR_7 ;

__attribute__((used)) static inline int
FUNC_8(unsigned long VAR_8, int VAR_9)
{
 int VAR_10;

 if (VAR_6) {
  if (FUNC_5()) {
   int VAR_11;
   void *VAR_12;
   int VAR_13;

   VAR_11 = FUNC_7(FUNC_4(FUNC_2(VAR_8)));
   VAR_12 = (void *)FUNC_1(VAR_7[VAR_11]);

   for (VAR_13=0; VAR_13 < VAR_4; VAR_13++) {
    FUNC_0(VAR_12, VAR_2);
    VAR_12 += VAR_3;
   }
  }

  VAR_10 = FUNC_3(0, VAR_8 & ~VAR_5, VAR_9,
      VAR_0 | VAR_1, ((void*)0));
 } else {
  FUNC_6((char *) VAR_8, 0, VAR_9);
  VAR_10 = 0;
 }
 return VAR_10;
}
