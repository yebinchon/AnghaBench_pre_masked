
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmlparser {char const* xmlstart; int xmlsize; scalar_t__ attfunc; int datafunc; int endeltfunc; int starteltfunc; struct NameValueParserData* data; } ;
struct NameValueParserData {scalar_t__ portListingLength; int * portListing; int * l_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xmlparser*) ;

void
FUNC_1(const char * VAR_3, int VAR_4,
               struct NameValueParserData * VAR_5)
{
 struct xmlparser VAR_6;
 VAR_5->l_head = ((void*)0);
 VAR_5->portListing = ((void*)0);
 VAR_5->portListingLength = 0;

 VAR_6.xmlstart = VAR_3;
 VAR_6.xmlsize = VAR_4;
 VAR_6.data = VAR_5;
 VAR_6.starteltfunc = VAR_2;
 VAR_6.endeltfunc = VAR_0;
 VAR_6.datafunc = VAR_1;
 VAR_6.attfunc = 0;
 FUNC_0(&VAR_6);
}
