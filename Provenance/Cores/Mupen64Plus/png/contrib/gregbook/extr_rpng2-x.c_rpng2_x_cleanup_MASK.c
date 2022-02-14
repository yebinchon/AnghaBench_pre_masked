
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* image_data; char* row_pointers; } ;
struct TYPE_4__ {char* data; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_2__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;

__attribute__((used)) static void FUNC_6(void)
{
    if (VAR_1 && VAR_0) {
        FUNC_5(VAR_0);
        VAR_0 = ((void*)0);
    }

    if (VAR_9.image_data) {
        FUNC_5(VAR_9.image_data);
        VAR_9.image_data = ((void*)0);
    }

    if (VAR_9.row_pointers) {
        FUNC_5(VAR_9.row_pointers);
        VAR_9.row_pointers = ((void*)0);
    }

    if (VAR_12) {
        if (VAR_12->data) {
            FUNC_5(VAR_12->data);
            VAR_12->data = (char *)((void*)0);
        }
        FUNC_0(VAR_12);
        VAR_12 = ((void*)0);
    }

    if (VAR_6)
        FUNC_4(VAR_3, VAR_4);

    if (VAR_8)
        FUNC_1(VAR_3, VAR_11);

    if (VAR_5)
        FUNC_3(VAR_3, VAR_2);

    if (VAR_7)
        FUNC_2(VAR_10);
}
