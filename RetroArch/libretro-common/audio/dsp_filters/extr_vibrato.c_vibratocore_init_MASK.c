
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vibrato_core {int size; int samplerate; float freq; float depth; scalar_t__ writeindex; scalar_t__ phase; int buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct vibrato_core *VAR_2,float VAR_3,int VAR_4,float VAR_5)
{
 VAR_2->size = VAR_0 * VAR_4 * 2;
 VAR_2->buffer = FUNC_0((VAR_2->size + VAR_1)*sizeof(float));
 FUNC_1(VAR_2->buffer, 0, (VAR_2->size + VAR_1) * sizeof(float));
 VAR_2->samplerate = VAR_4;
 VAR_2->freq = VAR_5;
 VAR_2->depth = VAR_3;
 VAR_2->phase = 0;
 VAR_2->writeindex = 0;
}
