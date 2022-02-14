
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ALCenum ;
typedef int ALCdevice ;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static inline int FUNC_3(ALCdevice *VAR_4, const char** VAR_5)
{
    ALCenum VAR_6 = FUNC_1(VAR_4);
    if (VAR_5)
        *VAR_5 = (const char*) FUNC_2(VAR_4, VAR_6);
    switch (VAR_6) {
    case 129:
        return 0;
    case 132:
        return FUNC_0(VAR_2);
        break;
    case 133:
    case 131:
    case 130:
        return FUNC_0(VAR_0);
        break;
    case 128:
        return FUNC_0(VAR_3);
        break;
    default:
        return FUNC_0(VAR_1);
    }
}
