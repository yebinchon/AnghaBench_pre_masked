
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_stream_s {int workspace; } ;
struct deflate_ctx {struct z_stream_s comp_stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct z_stream_s*,int ,int ,int ,int ,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct deflate_ctx *VAR_8)
{
 int VAR_9 = 0;
 struct z_stream_s *VAR_10 = &VAR_8->comp_stream;

 VAR_10->workspace = FUNC_2(FUNC_4());
 if (!VAR_10->workspace ) {
  VAR_9 = -VAR_4;
  goto out;
 }
 FUNC_0(VAR_10->workspace, 0, FUNC_4());
 VAR_9 = FUNC_3(VAR_10, VAR_0, VAR_6,
                         -VAR_2, VAR_1,
                         VAR_5);
 if (VAR_9 != VAR_7) {
  VAR_9 = -VAR_3;
  goto out_free;
 }
out:
 return VAR_9;
out_free:
 FUNC_1(VAR_10->workspace);
 goto out;
}
