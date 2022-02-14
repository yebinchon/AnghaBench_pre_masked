
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {size_t literal_histograms_size; size_t command_histograms_size; size_t distance_histograms_size; TYPE_2__* distance_histograms; TYPE_1__* command_histograms; TYPE_3__* literal_histograms; } ;
struct TYPE_8__ {int data_; } ;
struct TYPE_7__ {int data_; } ;
struct TYPE_6__ {int data_; } ;
typedef TYPE_4__ MetaBlockSplit ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int *) ;

void FUNC_1(uint32_t VAR_1,
                              MetaBlockSplit* VAR_2) {
  uint8_t VAR_3[VAR_0];
  size_t VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_2->literal_histograms_size; ++VAR_4) {
    FUNC_0(256, VAR_2->literal_histograms[VAR_4].data_,
                                      VAR_3);
  }
  for (VAR_4 = 0; VAR_4 < VAR_2->command_histograms_size; ++VAR_4) {
    FUNC_0(VAR_0,
                                      VAR_2->command_histograms[VAR_4].data_,
                                      VAR_3);
  }
  for (VAR_4 = 0; VAR_4 < VAR_2->distance_histograms_size; ++VAR_4) {
    FUNC_0(VAR_1,
                                      VAR_2->distance_histograms[VAR_4].data_,
                                      VAR_3);
  }
}
