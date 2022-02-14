
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ state; int registry_id; } ;
struct TYPE_7__ {scalar_t__ nVersion; } ;
typedef TYPE_1__ OMX_VERSIONTYPE ;
typedef scalar_t__ OMX_UUIDTYPE ;
typedef char* OMX_STRING ;
typedef scalar_t__ OMX_HANDLETYPE ;
typedef int OMX_ERRORTYPE ;
typedef TYPE_2__ MMALOMX_COMPONENT_T ;


 int FUNC_0 (char*,scalar_t__,char*,TYPE_1__*,TYPE_1__*,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_1 (int ,char const**) ;
 int FUNC_2 (char*,int,char*,char const*,...) ;

__attribute__((used)) static OMX_ERRORTYPE FUNC_3(
   OMX_HANDLETYPE VAR_7,
   OMX_STRING VAR_8,
   OMX_VERSIONTYPE* VAR_9,
   OMX_VERSIONTYPE* VAR_10,
   OMX_UUIDTYPE* VAR_11)
{
   MMALOMX_COMPONENT_T *VAR_12 = (MMALOMX_COMPONENT_T *)VAR_7;
   const char *VAR_13, *VAR_14;

   FUNC_0("hComponent %p, componentName %p, componentVersion %p, "
             "pSpecVersion %p, componentUUID %p",
             VAR_7, VAR_8, VAR_9, VAR_10,
             VAR_11);


   if (!VAR_7)
      return VAR_1;
   if (VAR_12->state == VAR_5)
      return VAR_2;
   if (!VAR_8 || !VAR_9 || !VAR_10 || !VAR_11 )
      return VAR_0;

   VAR_13 = FUNC_1(VAR_12->registry_id, &VAR_14);

   FUNC_2(VAR_8, VAR_4, "%s%s", VAR_13, VAR_14);
   VAR_9->nVersion = 0;
   VAR_10->nVersion = VAR_6;
   FUNC_2((char *)(*VAR_11), sizeof(OMX_UUIDTYPE), "%s", VAR_8);

   return VAR_3;
}
