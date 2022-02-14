
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmlparser {char* xml; char* xmlend; int data; int (* attfunc ) (int ,char const*,int,char const*,int) ;} ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (int ,char const*,int,char const*,int) ;

__attribute__((used)) static int FUNC_2(struct xmlparser * VAR_0)
{
 const char * VAR_1;
 int VAR_2;
 const char * VAR_3;
 int VAR_4;
 while(VAR_0->xml < VAR_0->xmlend)
 {
  if(*VAR_0->xml=='/' || *VAR_0->xml=='>')
   return 0;
  if( !FUNC_0(*VAR_0->xml) )
  {
   char VAR_5;
   VAR_1 = VAR_0->xml;
   VAR_2 = 0;
   while(*VAR_0->xml!='=' && !FUNC_0(*VAR_0->xml) )
   {
    VAR_2++; VAR_0->xml++;
    if(VAR_0->xml >= VAR_0->xmlend)
     return -1;
   }
   while(*(VAR_0->xml++) != '=')
   {
    if(VAR_0->xml >= VAR_0->xmlend)
     return -1;
   }
   while(FUNC_0(*VAR_0->xml))
   {
    VAR_0->xml++;
    if(VAR_0->xml >= VAR_0->xmlend)
     return -1;
   }
   VAR_5 = *VAR_0->xml;
   if(VAR_5=='\'' || VAR_5=='\"')
   {
    VAR_0->xml++;
    if(VAR_0->xml >= VAR_0->xmlend)
     return -1;
    VAR_3 = VAR_0->xml;
    VAR_4 = 0;
    while(*VAR_0->xml != VAR_5)
    {
     VAR_4++; VAR_0->xml++;
     if(VAR_0->xml >= VAR_0->xmlend)
      return -1;
    }
   }
   else
   {
    VAR_3 = VAR_0->xml;
    VAR_4 = 0;
    while( !FUNC_0(*VAR_0->xml)
       && *VAR_0->xml != '>' && *VAR_0->xml != '/')
    {
     VAR_4++; VAR_0->xml++;
     if(VAR_0->xml >= VAR_0->xmlend)
      return -1;
    }
   }


   if(VAR_0->attfunc)
    VAR_0->attfunc(VAR_0->data, VAR_1, VAR_2, VAR_3, VAR_4);
  }
  VAR_0->xml++;
 }
 return -1;
}
