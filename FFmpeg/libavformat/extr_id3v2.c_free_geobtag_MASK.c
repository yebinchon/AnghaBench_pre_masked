
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; int description; int file_name; int mime_type; } ;
typedef TYPE_1__ ID3v2ExtraMetaGEOB ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    ID3v2ExtraMetaGEOB *VAR_1 = VAR_0;
    FUNC_1(&VAR_1->mime_type);
    FUNC_1(&VAR_1->file_name);
    FUNC_1(&VAR_1->description);
    FUNC_1(&VAR_1->data);
    FUNC_0(VAR_1);
}
