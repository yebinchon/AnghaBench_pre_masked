
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmlparser {scalar_t__ xmlsize; scalar_t__ xmlstart; scalar_t__ xmlend; scalar_t__ xml; } ;


 int FUNC_0 (struct xmlparser*) ;

void FUNC_1(struct xmlparser * VAR_0)
{
 VAR_0->xml = VAR_0->xmlstart;
 VAR_0->xmlend = VAR_0->xmlstart + VAR_0->xmlsize;
 FUNC_0(VAR_0);
}
