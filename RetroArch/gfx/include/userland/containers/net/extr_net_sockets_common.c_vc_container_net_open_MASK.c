
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vc_container_net_status_t ;
typedef int vc_container_net_open_flags_t ;
struct addrinfo {int type; int read_timeout_ms; int max_datagram_size; scalar_t__ socket; int ai_addrlen; int ai_addr; int to_addr; int to_addr_len; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;
typedef int hints ;
typedef struct addrinfo VC_CONTAINER_NET_T ;
typedef scalar_t__ SOCKET_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;


 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (struct addrinfo*,int ,int) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct addrinfo*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__,int) ;

VC_CONTAINER_NET_T *FUNC_17( const char *VAR_13, const char *VAR_14,
      vc_container_net_open_flags_t VAR_15, vc_container_net_status_t *VAR_16 )
{
   VC_CONTAINER_NET_T *VAR_17;
   struct addrinfo VAR_18, *VAR_19, *VAR_20;
   int VAR_21;
   vc_container_net_status_t VAR_22;
   SOCKET_T VAR_23 = VAR_4;

   VAR_22 = FUNC_13();
   if (VAR_22 != VAR_12)
   {
      FUNC_0(((void*)0), "vc_container_net_open: platform initialization failure: %d", VAR_22);
      if (VAR_16)
         *VAR_16 = VAR_22;
      return ((void*)0);
   }

   VAR_17 = (VC_CONTAINER_NET_T *)FUNC_5(sizeof(VC_CONTAINER_NET_T));
   if (!VAR_17)
   {
      if (VAR_16)
         *VAR_16 = VAR_9;

      FUNC_0(((void*)0), "vc_container_net_open: malloc fail for VC_CONTAINER_NET_T");
      FUNC_12();
      return ((void*)0);
   }


   FUNC_7(VAR_17, 0, sizeof(*VAR_17));
   VAR_17->socket = VAR_4;
   if (VAR_15 & VAR_11)
      VAR_17->type = VAR_13 ? 131 : 130;
   else
      VAR_17->type = VAR_13 ? 132 : 133;


   FUNC_7(&VAR_18, 0, sizeof(VAR_18));
   switch (VAR_15 & VAR_10)
   {
   case 0:
      VAR_18.ai_family = VAR_2;
      break;
   case 129:
      VAR_18.ai_family = VAR_0;
      break;
   case 128:
      VAR_18.ai_family = VAR_1;
      break;
   default:
      VAR_22 = VAR_8;
      FUNC_0(((void*)0), "vc_container_net_open: invalid address forcing flag");
      goto error;
   }
   VAR_18.ai_socktype = (VAR_15 & VAR_11) ? VAR_7 : VAR_6;

   VAR_21 = FUNC_4(VAR_13, VAR_14, &VAR_18, &VAR_19);
   if (VAR_21)
   {
      VAR_22 = FUNC_14();
      FUNC_0(((void*)0), "vc_container_net_open: unable to get address info: %d", VAR_22);
      goto error;
   }



   for(VAR_20 = VAR_19; (VAR_20 != ((void*)0)) && (VAR_23 == VAR_4) ; VAR_20 = VAR_20->ai_next)
   {
      VAR_23 = FUNC_8(VAR_20->ai_family, VAR_20->ai_socktype, VAR_20->ai_protocol);
      if (VAR_23 == VAR_4)
      {
         VAR_22 = FUNC_14();
         continue;
      }

      switch (VAR_17->type)
      {
      case 131:

            if (FUNC_2(VAR_23, VAR_20->ai_addr, VAR_20->ai_addrlen) == VAR_5)
               VAR_22 = FUNC_14();
            break;

      case 132:

            break;

      case 130:

            FUNC_16(VAR_23, 1);


            FUNC_9(VAR_20->ai_addr);

            if (FUNC_1(VAR_23, VAR_20->ai_addr, VAR_20->ai_addrlen) == VAR_5)
               VAR_22 = FUNC_14();
            break;

      case 133:

            FUNC_9(VAR_20->ai_addr);

            if (FUNC_1(VAR_23, VAR_20->ai_addr, VAR_20->ai_addrlen) == VAR_5)
               VAR_22 = FUNC_14();
            break;
      }

      if (VAR_22 == VAR_12)
      {

         VAR_17->to_addr_len = VAR_20->ai_addrlen;
         FUNC_6(&VAR_17->to_addr, VAR_20->ai_addr, VAR_20->ai_addrlen);
      } else {
         FUNC_11(VAR_23);
         VAR_23 = VAR_4;
      }
   }

   FUNC_3(VAR_19);

   if (VAR_23 == VAR_4)
   {
      FUNC_0(((void*)0), "vc_container_net_open: failed to open socket: %d", VAR_22);
      goto error;
   }

   VAR_17->socket = VAR_23;
   VAR_17->max_datagram_size = FUNC_15(VAR_23);
   VAR_17->read_timeout_ms = VAR_3;

   if (VAR_16)
      *VAR_16 = VAR_12;

   return VAR_17;

error:
   if (VAR_16)
      *VAR_16 = VAR_22;
   (void)FUNC_10(VAR_17);
   return ((void*)0);
}
