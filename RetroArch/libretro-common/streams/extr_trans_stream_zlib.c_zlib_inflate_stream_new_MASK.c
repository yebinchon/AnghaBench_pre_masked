
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zlib_trans_stream {int ex; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static void *FUNC_1(void)
{
   struct zlib_trans_stream *VAR_1 = (struct zlib_trans_stream*)FUNC_0(1, sizeof(struct zlib_trans_stream));
   if (!VAR_1)
      return ((void*)0);
   VAR_1->ex = VAR_0;
   return (void *) VAR_1;
}
