
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zoran {int JPEG_min_missed; scalar_t__ JPEG_max_missed; scalar_t__ JPEG_missed; scalar_t__ END_event_missed; scalar_t__ JPEG_1; scalar_t__ JPEG_0; scalar_t__ JPEG_out; scalar_t__ JPEG_in; scalar_t__ IRQ1_out; scalar_t__ IRQ1_in; scalar_t__ field_counter; scalar_t__ intr_counter_JPEGRepIRQ; scalar_t__ intr_counter_CodRepIRQ; scalar_t__ intr_counter_GIRQ0; scalar_t__ intr_counter_GIRQ1; } ;



void
FUNC_0 (struct zoran *VAR_0)
{
 VAR_0->intr_counter_GIRQ1 = 0;
 VAR_0->intr_counter_GIRQ0 = 0;
 VAR_0->intr_counter_CodRepIRQ = 0;
 VAR_0->intr_counter_JPEGRepIRQ = 0;
 VAR_0->field_counter = 0;
 VAR_0->IRQ1_in = 0;
 VAR_0->IRQ1_out = 0;
 VAR_0->JPEG_in = 0;
 VAR_0->JPEG_out = 0;
 VAR_0->JPEG_0 = 0;
 VAR_0->JPEG_1 = 0;
 VAR_0->END_event_missed = 0;
 VAR_0->JPEG_missed = 0;
 VAR_0->JPEG_max_missed = 0;
 VAR_0->JPEG_min_missed = 0x7fffffff;
}
