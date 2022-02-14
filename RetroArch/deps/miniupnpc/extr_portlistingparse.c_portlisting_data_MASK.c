
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct PortMappingParserData {int curelt; struct PortMapping* l_head; } ;
struct PortMapping {char* remoteHost; unsigned short externalPort; char* protocol; unsigned short internalPort; char* internalClient; unsigned char enabled; char* description; scalar_t__ leaseTime; } ;
 int FUNC_0 (char*,char const*,int) ;
 scalar_t__ FUNC_1 (char const*,int) ;

__attribute__((used)) static void FUNC_2(void * VAR_0, const char * VAR_1, int VAR_2)
{
 struct PortMapping * VAR_3;
 struct PortMappingParserData * VAR_4 = (struct PortMappingParserData *)VAR_0;
 VAR_3 = VAR_4->l_head;
 if(!VAR_3)
  return;
 if(VAR_2 > 63)
  VAR_2 = 63;
 switch(VAR_4->curelt)
 {
 case 128:
  FUNC_0(VAR_3->remoteHost, VAR_1, VAR_2);
  VAR_3->remoteHost[VAR_2] = '\0';
  break;
 case 133:
  VAR_3->externalPort = (unsigned short)FUNC_1(VAR_1, VAR_2);
  break;
 case 129:
  if(VAR_2 > 3)
   VAR_2 = 3;
  FUNC_0(VAR_3->protocol, VAR_1, VAR_2);
  VAR_3->protocol[VAR_2] = '\0';
  break;
 case 131:
  VAR_3->internalPort = (unsigned short)FUNC_1(VAR_1, VAR_2);
  break;
 case 132:
  FUNC_0(VAR_3->internalClient, VAR_1, VAR_2);
  VAR_3->internalClient[VAR_2] = '\0';
  break;
 case 134:
  VAR_3->enabled = (unsigned char)FUNC_1(VAR_1, VAR_2);
  break;
 case 135:
  FUNC_0(VAR_3->description, VAR_1, VAR_2);
  VAR_3->description[VAR_2] = '\0';
  break;
 case 130:
  VAR_3->leaseTime = FUNC_1(VAR_1, VAR_2);
  break;
 default:
  break;
 }
}
