
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NameValueParserData {struct NameValue* l_head; scalar_t__ portListingLength; struct NameValue* portListing; } ;
struct NameValue {struct NameValue* l_next; } ;


 int FUNC_0 (struct NameValue*) ;

void
FUNC_1(struct NameValueParserData * VAR_0)
{
    struct NameValue * VAR_1;
 if(VAR_0->portListing)
 {
  FUNC_0(VAR_0->portListing);
  VAR_0->portListing = ((void*)0);
  VAR_0->portListingLength = 0;
 }
    while((VAR_1 = VAR_0->l_head) != ((void*)0))
    {
  VAR_0->l_head = VAR_1->l_next;
        FUNC_0(VAR_1);
    }
}
