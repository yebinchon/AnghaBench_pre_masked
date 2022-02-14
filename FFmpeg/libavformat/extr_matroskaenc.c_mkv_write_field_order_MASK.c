
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVFieldOrder { ____Placeholder_AVFieldOrder } AVFieldOrder ;
typedef int AVIOContext ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(AVIOContext *VAR_9, int VAR_10,
                                  enum AVFieldOrder VAR_11)
{
    switch (VAR_11) {
    case 128:
        break;
    case 131:
        FUNC_0(VAR_9, VAR_1,
                      VAR_7);
        break;
    case 129:
    case 133:
    case 130:
    case 132:
        FUNC_0(VAR_9, VAR_1,
                      VAR_6);
        if (VAR_10 != VAR_8) {
            switch (VAR_11) {
            case 129:
                FUNC_0(VAR_9, VAR_0,
                              VAR_5);
                break;
            case 133:
                FUNC_0(VAR_9, VAR_0,
                              VAR_2);
                break;
            case 130:
                FUNC_0(VAR_9, VAR_0,
                              VAR_4);
                break;
            case 132:
                FUNC_0(VAR_9, VAR_0,
                              VAR_3);
                break;
            }
        }
    }
}
