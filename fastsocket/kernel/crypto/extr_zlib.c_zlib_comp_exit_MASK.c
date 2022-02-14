
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_stream_s {int * workspace; } ;
struct zlib_ctx {struct z_stream_s comp_stream; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct z_stream_s*) ;

__attribute__((used)) static void FUNC_2(struct zlib_ctx *VAR_0)
{
 struct z_stream_s *VAR_1 = &VAR_0->comp_stream;

 if (VAR_1->workspace) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1->workspace);
  VAR_1->workspace = ((void*)0);
 }
}
