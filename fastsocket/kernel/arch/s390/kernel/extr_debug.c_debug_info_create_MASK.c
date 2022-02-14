
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int mode_t ;
struct TYPE_7__ {int mode; struct TYPE_7__* next; struct TYPE_7__* prev; int name; int debugfs_root_entry; } ;
typedef TYPE_1__ debug_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (char const*,int,int,int,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static debug_info_t*
FUNC_3(const char *VAR_6, int VAR_7, int VAR_8,
    int VAR_9, mode_t VAR_10)
{
 debug_info_t* VAR_11;

        VAR_11 = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9,
    VAR_1, VAR_0);
        if(!VAR_11)
  goto out;

 VAR_11->mode = VAR_10 & ~VAR_2;


        VAR_11->debugfs_root_entry = FUNC_2(VAR_11->name,
     VAR_5);


        if (!VAR_3) {

                VAR_3 = VAR_11;
                VAR_11->prev = ((void*)0);
        } else {

                VAR_4->next = VAR_11;
                VAR_11->prev = VAR_4;
        }
        VAR_4 = VAR_11;
        VAR_11->next = ((void*)0);

 FUNC_1(VAR_11);
out:
 return VAR_11;
}
