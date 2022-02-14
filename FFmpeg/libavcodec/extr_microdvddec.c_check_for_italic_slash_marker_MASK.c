
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct microdvd_tag {char key; int data1; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ,char) ;
 int FUNC_1 (struct microdvd_tag*,struct microdvd_tag) ;

__attribute__((used)) static char *FUNC_2(struct microdvd_tag *VAR_1, char *VAR_2)
{
    if (*VAR_2 == '/') {
        struct microdvd_tag VAR_3 = VAR_1[FUNC_0(VAR_0, 'y')];
        VAR_3.key = 'y';
        VAR_3.data1 |= 1 << 0 ;
        FUNC_1(VAR_1, VAR_3);
        VAR_2++;
    }
    return VAR_2;
}
