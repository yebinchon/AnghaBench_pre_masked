
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbg_string {int dummy; } ;
struct sbg_parser {int err_msg; } ;


 int VAR_0 ;
 int FUNC_0 (struct sbg_parser*,struct sbg_string*) ;
 int FUNC_1 (int ,int,char*,char) ;

__attribute__((used)) static int FUNC_2(struct sbg_parser *VAR_1, char VAR_2, struct sbg_string *VAR_3)
{
    if (!FUNC_0(VAR_1, VAR_3)) {
        FUNC_1(VAR_1->err_msg, sizeof(VAR_1->err_msg),
                 "option '%c' requires an argument", VAR_2);
        return VAR_0;
    }
    return 1;
}
