
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm {int * mmap_control; int * mmap_status; int * sync_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct pcm *VAR_1)
{
    if (VAR_1->sync_ptr)
    {
        FUNC_0(VAR_1->sync_ptr);
        VAR_1->sync_ptr = ((void*)0);
    }
    else
    {
        int VAR_2 = FUNC_2(VAR_0);
        if (VAR_1->mmap_status)
            FUNC_1(VAR_1->mmap_status, VAR_2);
        if (VAR_1->mmap_control)
            FUNC_1(VAR_1->mmap_control, VAR_2);
    }
    VAR_1->mmap_status = ((void*)0);
    VAR_1->mmap_control = ((void*)0);
}
