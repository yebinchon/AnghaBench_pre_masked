
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct error_entry {int num; int str; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct error_entry*) ;
 int FUNC_3 (char*,int ,size_t) ;
 struct error_entry* VAR_0 ;
 int FUNC_4 (char*,size_t,char*,int) ;
 int FUNC_5 (int ,char*,size_t) ;

int FUNC_6(int VAR_1, char *VAR_2, size_t VAR_3)
{
    int VAR_4 = 0, VAR_5;
    const struct error_entry *VAR_6 = ((void*)0);

    for (VAR_5 = 0; VAR_5 < FUNC_2(VAR_0); VAR_5++) {
        if (VAR_1 == VAR_0[VAR_5].num) {
            VAR_6 = &VAR_0[VAR_5];
            break;
        }
    }
    if (VAR_6) {
        FUNC_3(VAR_2, VAR_6->str, VAR_3);
    } else {



        VAR_4 = -1;

        if (VAR_4 < 0)
            FUNC_4(VAR_2, VAR_3, "Error number %d occurred", VAR_1);
    }

    return VAR_4;
}
