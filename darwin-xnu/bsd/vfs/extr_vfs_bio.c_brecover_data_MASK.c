
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vnode_t ;
typedef int vm_offset_t ;
typedef int upl_t ;
typedef int upl_page_info_t ;
typedef scalar_t__ kern_return_t ;
typedef TYPE_1__* buf_t ;
struct TYPE_5__ {int b_bufsize; int b_flags; int b_datap; int b_upl; int b_lblkno; int b_vp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int,int *,int **,int,int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static int
FUNC_11(buf_t VAR_7)
{
 int VAR_8;
        upl_t VAR_9;
 upl_page_info_t *VAR_10;
 kern_return_t VAR_11;
 vnode_t VAR_12 = VAR_7->b_vp;
 int VAR_13;


 if ( !FUNC_1(VAR_12) || VAR_7->b_bufsize == 0)
         goto dump_buffer;

 VAR_13 = VAR_4;
 if (! (FUNC_3(VAR_7) & VAR_1)) {





  VAR_13 |= VAR_5;
 }

 VAR_11 = FUNC_6(VAR_12,
         FUNC_5(VAR_12, VAR_7->b_lblkno),
         VAR_7->b_bufsize,
         &VAR_9,
         &VAR_10,
         VAR_13,
         VAR_6);
 if (VAR_11 != VAR_2)
         FUNC_4("Failed to create UPL");

 for (VAR_8 = 0; VAR_8 < VAR_7->b_bufsize; VAR_8 += VAR_3) {

         if (!FUNC_10(VAR_10, VAR_8 / VAR_3) || !FUNC_9(VAR_10, VAR_8 / VAR_3)) {
          FUNC_7(VAR_9, 0);
   goto dump_buffer;
  }
 }
 VAR_7->b_upl = VAR_9;

 VAR_11 = FUNC_8(VAR_9, (vm_offset_t *)&(VAR_7->b_datap));

 if (VAR_11 != VAR_2)
         FUNC_4("getblk: ubc_upl_map() failed with (%d)", VAR_11);
 return (1);

dump_buffer:
 VAR_7->b_bufsize = 0;
 FUNC_0(VAR_7->b_flags, VAR_0);
 FUNC_2(VAR_7);

 return(0);
}
