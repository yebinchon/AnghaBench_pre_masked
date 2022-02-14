
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int URLContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int FUNC_1 (int *,int ,char*,char const*,...) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_5, const char* VAR_6, int VAR_7)
{
    switch (VAR_7) {
    case 129:
    case 128:
        return FUNC_0(VAR_3);
    case 131:
    case 132:
        return FUNC_0(VAR_4);
    case 133:
    case 130:
        FUNC_1(VAR_5, VAR_2, "%s reported connection reset by peer\n", VAR_6);
        return VAR_0;
    default:
        FUNC_1(VAR_5, VAR_1, "%s returned -0x%x\n", VAR_6, -VAR_7);
        return FUNC_0(VAR_4);
    }
}
