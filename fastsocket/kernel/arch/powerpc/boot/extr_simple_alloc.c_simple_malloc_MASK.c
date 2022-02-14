
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_info {int flags; unsigned long base; unsigned long size; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (unsigned long,int ) ;
 int VAR_2 ;
 struct alloc_info* VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;

__attribute__((used)) static void *FUNC_1(unsigned long VAR_7)
{
 unsigned long VAR_8;
 struct alloc_info *VAR_9 = VAR_3;

 if (VAR_7 == 0)
  goto err_out;

 VAR_7 = FUNC_0(VAR_7, VAR_2);

 for (VAR_8=0; VAR_8<VAR_6; VAR_8++, VAR_9++)
  if (!(VAR_9->flags & VAR_0)) {
   if (VAR_7 <= VAR_5) {
    VAR_9->base = VAR_4;
    VAR_9->size = VAR_7;
    VAR_9->flags = VAR_0 | VAR_1;
    VAR_4 += VAR_7;
    VAR_5 -= VAR_7;
    return (void *)VAR_9->base;
   }
   goto err_out;
  }

  else if (!(VAR_9->flags & VAR_1) && (VAR_7 <= VAR_9->size)) {
   VAR_9->flags |= VAR_1;
   return (void *)VAR_9->base;
  }
err_out:
 return ((void*)0);
}
