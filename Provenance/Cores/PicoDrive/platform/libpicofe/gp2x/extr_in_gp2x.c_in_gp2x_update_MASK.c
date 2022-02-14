
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int,int) ;
 int FUNC_1 (int,int const*,int ,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(void *VAR_6, const int *VAR_7, int *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10, VAR_11, VAR_12;

 VAR_12 = FUNC_2();

 if (VAR_12 & VAR_5) {
  VAR_8[VAR_2] = FUNC_1(VAR_12, VAR_7, VAR_0,
      VAR_5, VAR_4);
  VAR_9 = VAR_3;
 }

 for (VAR_10 = 0; VAR_12; VAR_10++, VAR_12 >>= 1) {
  if (!(VAR_12 & 1))
   continue;

  for (VAR_11 = VAR_9; VAR_11 < VAR_1; VAR_11++)
   VAR_8[VAR_11] |= VAR_7[FUNC_0(VAR_10, VAR_11)];
 }

 return 0;
}
