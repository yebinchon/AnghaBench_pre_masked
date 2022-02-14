
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int,unsigned long*) ;
 unsigned int FUNC_2 (unsigned long*,unsigned int,unsigned int) ;
 int FUNC_3 (unsigned long*) ;
 unsigned long* FUNC_4 (int,int ) ;
 int FUNC_5 (unsigned long*,unsigned long*,int) ;
 int VAR_4 ;
 unsigned long* VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(unsigned int VAR_7, unsigned int VAR_8)
{
 unsigned int VAR_9 = VAR_7 + VAR_8;
 int VAR_10;

 if (VAR_9 > VAR_6) {
  unsigned long *VAR_11, *VAR_12;

  VAR_11 = FUNC_4(FUNC_0(VAR_9) * sizeof(*VAR_11),
     VAR_3);
  if (VAR_11 == ((void*)0))
   return -VAR_2;

  FUNC_6(&VAR_4);
  if (VAR_9 > VAR_6) {
   VAR_12 = VAR_5;
   FUNC_5(VAR_11, VAR_5,
          FUNC_0(VAR_6) * sizeof(*VAR_11));
   VAR_5 = VAR_11;
   VAR_6 = FUNC_0(VAR_9) * VAR_0;
  } else
   VAR_12 = VAR_11;
  FUNC_7(&VAR_4);
  FUNC_3(VAR_12);
 }

 FUNC_6(&VAR_4);
 if (FUNC_2(VAR_5, VAR_9, VAR_7) >= VAR_9) {
  for (; VAR_7 < VAR_9; ++VAR_7)
   FUNC_1(VAR_7, VAR_5);
  VAR_10 = 0;
 } else
  VAR_10 = -VAR_1;
 FUNC_7(&VAR_4);

 return VAR_10;
}
