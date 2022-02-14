
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int Q68State ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 (int *,int,int ,int ) ;
 int VAR_5 ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(Q68State *VAR_6, uint32_t VAR_7)
{
    int VAR_8 = ~VAR_7 & 0x0040;





    int VAR_9;
    switch (FUNC_0(VAR_7)) {
      case 133:
        VAR_9 = 8;
        break;
      case 135:
        VAR_9 = 10;
        break;
      case 134:
        VAR_9 = 14;
        break;
      case 132:
        switch (FUNC_1(VAR_7)) {
          case 130:
            VAR_9 = 10;
            break;
          case 131:
            VAR_9 = 12;
            break;
          case 129:
            VAR_9 = 10;
            break;
          case 128:
            VAR_9 = 14;
            break;
          default:
            return FUNC_8(VAR_6, VAR_7);
        }
        break;
      default:
        return FUNC_8(VAR_6, VAR_7);
    }
    if (VAR_8) {
        VAR_9 += 8;
    }
    FUNC_2(VAR_4, VAR_9);
    FUNC_6(VAR_6);

    FUNC_7(VAR_6, VAR_7, VAR_3, VAR_0);
    if (VAR_8) {

        FUNC_3(VAR_4, VAR_7,
                                  VAR_1 | VAR_2);

        FUNC_5(VAR_4, VAR_5);
        return 0;
    } else {
        FUNC_4(VAR_4);
        return 1;
    }
}
