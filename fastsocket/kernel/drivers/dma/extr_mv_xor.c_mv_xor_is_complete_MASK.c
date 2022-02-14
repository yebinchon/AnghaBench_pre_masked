
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_xor_chan {int completed_cookie; int is_complete_cookie; } ;
struct dma_chan {int cookie; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef int dma_cookie_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct mv_xor_chan*) ;
 int FUNC_2 (struct mv_xor_chan*) ;
 struct mv_xor_chan* FUNC_3 (struct dma_chan*) ;

__attribute__((used)) static enum dma_status FUNC_4(struct dma_chan *VAR_1,
       dma_cookie_t VAR_2,
       dma_cookie_t *VAR_3,
       dma_cookie_t *VAR_4)
{
 struct mv_xor_chan *VAR_5 = FUNC_3(VAR_1);
 dma_cookie_t VAR_6;
 dma_cookie_t VAR_7;
 enum dma_status VAR_8;

 VAR_6 = VAR_1->cookie;
 VAR_7 = VAR_5->completed_cookie;
 VAR_5->is_complete_cookie = VAR_2;
 if (VAR_3)
  *VAR_3 = VAR_7;
 if (VAR_4)
  *VAR_4 = VAR_6;

 VAR_8 = FUNC_0(VAR_2, VAR_7, VAR_6);
 if (VAR_8 == VAR_0) {
  FUNC_1(VAR_5);
  return VAR_8;
 }
 FUNC_2(VAR_5);

 VAR_6 = VAR_1->cookie;
 VAR_7 = VAR_5->completed_cookie;

 if (VAR_3)
  *VAR_3 = VAR_7;
 if (VAR_4)
  *VAR_4 = VAR_6;

 return FUNC_0(VAR_2, VAR_7, VAR_6);
}
