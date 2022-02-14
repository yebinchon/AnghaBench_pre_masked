
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int (* BTM_TOPOLOGY_FUNC_PTR ) (int ) ;
typedef int BOOLEAN ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static BOOLEAN FUNC_6(BTM_TOPOLOGY_FUNC_PTR *VAR_6, UINT8 VAR_7)
{
    BOOLEAN VAR_8 = VAR_5;

    switch (VAR_7) {
    case 131:
        VAR_8 = (*VAR_6)(VAR_0);
        break;

    case 128:
        VAR_8 = (*VAR_6) (VAR_3);
        break;
    case 132:
        VAR_8 = (*VAR_6) (VAR_1);
        break;

    case 129:
        VAR_8 = (*VAR_6) (VAR_4);
        break;

    case 130:
        VAR_8 = (*VAR_6) (VAR_2);
        break;

    default:
        FUNC_0("unknown adv event : %d", VAR_7);
        break;
    }

    return VAR_8;
}
