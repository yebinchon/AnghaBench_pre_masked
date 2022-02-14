
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* xmlXPathObjectPtr ;
typedef int xmlXPathContextPtr ;
typedef TYPE_3__* xmlNodeSetPtr ;
typedef int xmlNode ;
typedef char xmlChar ;
struct TYPE_12__ {int size; int buf; } ;
typedef TYPE_4__ memory ;
typedef int htmlDocPtr ;
struct TYPE_11__ {int nodeNr; TYPE_1__** nodeTab; } ;
struct TYPE_10__ {TYPE_3__* nodesetval; } ;
struct TYPE_9__ {int * xmlChildrenNode; } ;
typedef int CURLM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 double VAR_4 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ,char*,int *,int) ;
 int FUNC_2 (char*) ;
 int VAR_6 ;
 double FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;
 char* FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (int ,int const*,int) ;
 TYPE_2__* FUNC_9 (char*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;

size_t FUNC_14(CURLM *VAR_7, memory *VAR_8, char *VAR_9)
{
  int VAR_10 = VAR_0 | VAR_1 | VAR_3 | VAR_2;

  htmlDocPtr VAR_11 = FUNC_1(VAR_8->buf, VAR_8->size, VAR_9, ((void*)0), VAR_10);
  if(!VAR_11)
    return 0;
  xmlChar *VAR_12 = (xmlChar*) "//a/@href";
  xmlXPathContextPtr VAR_13 = FUNC_12(VAR_11);
  xmlXPathObjectPtr VAR_14 = FUNC_9(VAR_12, VAR_13);
  FUNC_10(VAR_13);
  if(!VAR_14)
    return 0;
  xmlNodeSetPtr VAR_15 = VAR_14->nodesetval;
  if(FUNC_13(VAR_15)) {
    FUNC_11(VAR_14);
    return 0;
  }
  size_t VAR_16 = 0;
  for(int VAR_17 = 0; VAR_17 < VAR_15->nodeNr; VAR_17++) {
    double VAR_18 = FUNC_3();
    int VAR_19 = VAR_18 * VAR_15->nodeNr / VAR_4;
    const xmlNode *VAR_20 = VAR_15->nodeTab[VAR_19]->xmlChildrenNode;
    xmlChar *VAR_21 = FUNC_8(VAR_11, VAR_20, 1);
    if(VAR_5) {
      xmlChar *VAR_22 = VAR_21;
      VAR_21 = FUNC_6(VAR_21, (xmlChar *) VAR_9);
      FUNC_7(VAR_22);
    }
    char *VAR_23 = (char *) VAR_21;
    if(!VAR_23 || FUNC_4(VAR_23) < 20)
      continue;
    if(!FUNC_5(VAR_23, "http://", 7) || !FUNC_5(VAR_23, "https://", 8)) {
      FUNC_0(VAR_7, FUNC_2(VAR_23));
      if(VAR_16++ == VAR_6)
        break;
    }
    FUNC_7(VAR_23);
  }
  FUNC_11(VAR_14);
  return VAR_16;
}
