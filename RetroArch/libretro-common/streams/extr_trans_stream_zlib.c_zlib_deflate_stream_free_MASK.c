
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zlib_trans_stream {int z; scalar_t__ inited; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct zlib_trans_stream*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
   struct zlib_trans_stream *VAR_1 = (struct zlib_trans_stream *) VAR_0;
   if (!VAR_1)
      return;
   if (VAR_1->inited)
      FUNC_0(&VAR_1->z);
   FUNC_1(VAR_1);
}
