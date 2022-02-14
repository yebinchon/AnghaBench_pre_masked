
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_direct_file_io_ref_t {int ctx; int vp; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,void*,size_t,int ,int ,int,int ,int*,int ) ;

int
FUNC_3(struct kern_direct_file_io_ref_t * VAR_5, off_t VAR_6, void * VAR_7, size_t VAR_8, int VAR_9)
{
    return (FUNC_2(VAR_4, VAR_5->vp,
   VAR_7, VAR_8, VAR_6,
   VAR_3, VAR_9|VAR_1|VAR_0|VAR_2,
                        FUNC_1(VAR_5->ctx), (int *) 0,
   FUNC_0(VAR_5->ctx)));
}
