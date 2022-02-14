
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {unsigned long freqValTelevision; unsigned long freqValRadio; scalar_t__ freqSelector; } ;



unsigned long FUNC_0(struct pvr2_hdw *VAR_0)
{
 return VAR_0->freqSelector ? VAR_0->freqValTelevision : VAR_0->freqValRadio;
}
