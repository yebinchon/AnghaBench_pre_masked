
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _throttle_io_info_t {scalar_t__ throttle_alloc; int throttle_refcnt; } ;
typedef int SInt32 ;


 int FUNC_0 (char*,struct _throttle_io_info_t*,int,struct _throttle_io_info_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static SInt32
FUNC_3(struct _throttle_io_info_t *VAR_0)
{
 SInt32 VAR_1 = FUNC_1(&VAR_0->throttle_refcnt);

 FUNC_0("refcnt = %d info = %p\n",
  VAR_0, (int)(VAR_1 -1), VAR_0 );

 if (VAR_0->throttle_alloc && (VAR_1 == 0))
  FUNC_2("Taking a reference without calling create throttle info!\n");

 return VAR_1;
}
