
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int,int,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int,int,int,int) ;
 int FUNC_3 (int,int,char const*,int,int,int) ;
 int FUNC_4 (char*) ;
 void FUNC_5 (char*,int,void*) ;
 void FUNC_6 (char*,int,void*) ;

__attribute__((used)) static int FUNC_7(int VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4,
                        char const *VAR_5, int VAR_6, int VAR_7,
                        void (*VAR_8)(char *VAR_9, int VAR_10, void *VAR_11),
                        void *VAR_12)
{
 enum { larrow = 126,
        rarrow = 127,
        bar = 18 };
 int VAR_13;
 int VAR_14 = VAR_6;
 char VAR_15[11];
 int VAR_16;

 if (VAR_14 < 0)
  VAR_14 = 0;
 else if (VAR_14 > VAR_7)
  VAR_14 = VAR_7;
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_2 + 1 + VAR_4, VAR_3 + 2);

 FUNC_3(VAR_1, VAR_0, VAR_5, VAR_2 + 1, VAR_3, VAR_4);
 FUNC_2(VAR_0, VAR_1, larrow, VAR_2 + 1, VAR_3 + 1);
 FUNC_2(VAR_0, VAR_1, rarrow, VAR_2 + VAR_4, VAR_3 + 1);

 for (;;) {
  int VAR_17;
  for (VAR_13 = VAR_2 + 2; VAR_13 < VAR_2 + VAR_4; ++VAR_13)
   FUNC_2(VAR_0, VAR_1, bar, VAR_13, VAR_3 + 1);
  (*VAR_8)(VAR_15, VAR_14, VAR_12);
  VAR_16 = FUNC_4(VAR_15);
  FUNC_3(VAR_1, VAR_0, VAR_15,
        VAR_7 == 0 ? VAR_2 + 2 + (VAR_4 - VAR_16 - 2) / 2
                       : VAR_2 + 2 + (VAR_4 - VAR_16 - 2) * VAR_14 / VAR_7,
        VAR_3 + 1, VAR_16);
  VAR_17 = FUNC_1();
  switch (VAR_17) {
   case 0x1c:
    VAR_14 = 0;
    break;
   case 0x1d:
    VAR_14 = VAR_7;
    break;
   case 0x1e:
    if (VAR_14 > 0)
     --VAR_14;
    break;
   case 0x1f:
    if (VAR_14 < VAR_7)
     ++VAR_14;
    break;
   case 0x1b:

    (*VAR_8)(VAR_15, VAR_6, VAR_12);
    return -1;
   case 0x7e:
    VAR_14 = VAR_6;
    if (VAR_14 < 0)
     VAR_14 = 0;
    else if (VAR_14 > VAR_7)
     VAR_14 = VAR_7;
    break;
   case 0x9b:
    return VAR_14;
  }
 }
 return -1;
}
