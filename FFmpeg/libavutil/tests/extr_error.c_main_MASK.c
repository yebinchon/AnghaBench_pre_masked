
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct error_entry {int num; char* tag; } ;


 int FUNC_0 (struct error_entry*) ;
 char* FUNC_1 (int) ;
 struct error_entry* VAR_0 ;
 int FUNC_2 (char*,int,char*,...) ;

int FUNC_3(void)
{
    int VAR_1;

    for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++) {
        const struct error_entry *VAR_2 = &VAR_0[VAR_1];
        FUNC_2("%d: %s [%s]\n", VAR_2->num, FUNC_1(VAR_2->num), VAR_2->tag);
    }

    for (VAR_1 = 0; VAR_1 < 256; VAR_1++) {
        FUNC_2("%d: %s\n", -VAR_1, FUNC_1(-VAR_1));
    }

    return 0;
}
