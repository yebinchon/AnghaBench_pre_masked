
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_stream_s {int avail_out; int next_out; int avail_in; int next_in; } ;
struct zlib_ctx {struct z_stream_s comp_stream; } ;
struct crypto_pcomp {int dummy; } ;
struct comp_request {int avail_out; int next_out; int avail_in; int next_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct crypto_pcomp*) ;
 struct zlib_ctx* FUNC_1 (int ) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct z_stream_s*,int ) ;

__attribute__((used)) static int FUNC_4(struct crypto_pcomp *VAR_3,
          struct comp_request *VAR_4)
{
 int VAR_5;
 struct zlib_ctx *VAR_6 = FUNC_1(FUNC_0(VAR_3));
 struct z_stream_s *VAR_7 = &VAR_6->comp_stream;

 FUNC_2("avail_in %u, avail_out %u\n", VAR_4->avail_in, VAR_4->avail_out);
 VAR_7->next_in = VAR_4->next_in;
 VAR_7->avail_in = VAR_4->avail_in;
 VAR_7->next_out = VAR_4->next_out;
 VAR_7->avail_out = VAR_4->avail_out;

 VAR_5 = FUNC_3(VAR_7, VAR_1);
 if (VAR_5 != VAR_2) {
  FUNC_2("zlib_deflate failed %d\n", VAR_5);
  return -VAR_0;
 }

 VAR_5 = VAR_4->avail_out - VAR_7->avail_out;
 FUNC_2("avail_in %u, avail_out %u (consumed %u, produced %u)\n",
   VAR_7->avail_in, VAR_7->avail_out,
   VAR_4->avail_in - VAR_7->avail_in, VAR_5);
 VAR_4->next_in = VAR_7->next_in;
 VAR_4->avail_in = VAR_7->avail_in;
 VAR_4->next_out = VAR_7->next_out;
 VAR_4->avail_out = VAR_7->avail_out;
 return VAR_5;
}
