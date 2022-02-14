
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int decoder; scalar_t__ compressed_offset; } ;
typedef TYPE_1__ flac_decoder ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(flac_decoder* VAR_6)
{
 VAR_6->compressed_offset = 0;
 if (FUNC_0(VAR_6->decoder,
    &VAR_3,
    ((void*)0),
    &VAR_4,
    ((void*)0),
    ((void*)0),
    &VAR_5,
    &VAR_2,
    &VAR_1, VAR_6) != VAR_0)
  return 0;
 return FUNC_1(VAR_6->decoder);
}
