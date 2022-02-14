
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv_stream {scalar_t__ dma; scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline int FUNC_0(struct ivtv_stream *VAR_3)
{
 return VAR_3->dma == VAR_1 || (VAR_2 && VAR_3->type == VAR_0);
}
