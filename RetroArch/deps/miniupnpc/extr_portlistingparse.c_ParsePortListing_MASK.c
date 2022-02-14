
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmlparser {char const* xmlstart; int xmlsize; scalar_t__ attfunc; int datafunc; int endeltfunc; int starteltfunc; struct PortMappingParserData* data; } ;
struct PortMappingParserData {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct PortMappingParserData*,int ,int) ;
 int FUNC_1 (struct xmlparser*) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_2(const char * VAR_3, int VAR_4,
                 struct PortMappingParserData * VAR_5)
{
 struct xmlparser VAR_6;

 FUNC_0(VAR_5, 0, sizeof(struct PortMappingParserData));

 VAR_6.xmlstart = VAR_3;
 VAR_6.xmlsize = VAR_4;
 VAR_6.data = VAR_5;
 VAR_6.starteltfunc = VAR_2;
 VAR_6.endeltfunc = VAR_0;
 VAR_6.datafunc = VAR_1;
 VAR_6.attfunc = 0;
 FUNC_1(&VAR_6);
}
