
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _throttle_io_info_t {scalar_t__ throttle_refcnt; int throttle_lock; scalar_t__ throttle_alloc; } ;
typedef int SInt32 ;


 int FUNC_0 (char*,struct _throttle_io_info_t*,...) ;
 int FUNC_1 (struct _throttle_io_info_t*,int ) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(struct _throttle_io_info_t *VAR_2)
{
 SInt32 VAR_3 = FUNC_2(&VAR_2->throttle_refcnt);

 FUNC_0("refcnt = %d info = %p\n",
  VAR_2, (int)(VAR_3 -1), VAR_2 );


 if (VAR_3 == 0)
  FUNC_4("throttle info ref cnt went negative!");





 if ((VAR_2->throttle_refcnt == 0) && (VAR_2->throttle_alloc)) {
  FUNC_0("Freeing info = %p\n", VAR_2);

  FUNC_3(&VAR_2->throttle_lock, VAR_1);
  FUNC_1(VAR_2, VAR_0);
 }
 return VAR_3;
}
