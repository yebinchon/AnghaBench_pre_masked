
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_29__ {size_t max_concurrent_streams; } ;
struct http_conn {TYPE_9__ settings; } ;
struct curl_llist_element {struct curl_llist_element* next; struct connectdata* ptr; } ;
struct TYPE_28__ {struct http_conn httpc; } ;
struct TYPE_27__ {scalar_t__ httpproxy; scalar_t__ socksproxy; scalar_t__ conn_to_host; scalar_t__ conn_to_port; scalar_t__ tunnel_proxy; scalar_t__ multiplex; scalar_t__ close; scalar_t__ protoconnstart; scalar_t__ connect_only; scalar_t__ proxy_user_passwd; } ;
struct TYPE_20__ {scalar_t__ proxytype; scalar_t__ passwd; scalar_t__ user; } ;
struct TYPE_25__ {int name; } ;
struct TYPE_24__ {int name; } ;
struct connectdata {scalar_t__* sock; scalar_t__ abstract_unix_socket; scalar_t__ localport; scalar_t__ localportrange; scalar_t__ conn_to_port; scalar_t__ remote_port; scalar_t__ http_ntlm_state; scalar_t__ proxy_ntlm_state; struct Curl_easy* data; TYPE_8__ proto; TYPE_7__ bits; TYPE_14__ http_proxy; scalar_t__ passwd; scalar_t__ user; int connection_id; TYPE_6__* ssl; int ssl_config; TYPE_13__* handler; TYPE_5__ host; TYPE_4__ conn_to_host; scalar_t__ tls_upgraded; scalar_t__ localdev; TYPE_3__* proxy_ssl; int proxy_ssl_config; TYPE_14__ socks_proxy; scalar_t__ unix_domain_socket; int * ip_addr_str; } ;
struct TYPE_22__ {struct curl_llist_element* head; } ;
struct connectbundle {scalar_t__ multiuse; TYPE_2__ conn_list; } ;
struct TYPE_16__ {scalar_t__ pipewait; } ;
struct TYPE_21__ {int want; } ;
struct TYPE_17__ {int want; } ;
struct TYPE_18__ {int conn_cache; TYPE_1__ authproxy; TYPE_11__ authhost; } ;
struct Curl_easy {scalar_t__ multi; TYPE_10__ set; TYPE_12__ state; } ;
struct TYPE_26__ {scalar_t__ state; } ;
struct TYPE_23__ {scalar_t__ state; } ;
struct TYPE_19__ {int protocol; int flags; int scheme; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct connectdata*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct connectbundle* FUNC_1 (struct connectdata*,int ,char const**) ;
 int FUNC_2 (struct Curl_easy*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_7 (struct Curl_easy*,struct connectdata*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct Curl_easy*,char*,...) ;
 int FUNC_10 (TYPE_14__*,TYPE_14__*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool
FUNC_13(struct Curl_easy *VAR_15,
                 struct connectdata *VAR_16,
                 struct connectdata **VAR_17,
                 bool *VAR_18,
                 bool *VAR_19)
{
  struct connectdata *VAR_20;
  struct connectdata *VAR_21 = 0;
  bool VAR_22 = VAR_7;
  bool VAR_23 = FUNC_7(VAR_15, VAR_16);
  struct connectbundle *VAR_24;
  const char *VAR_25;
  *VAR_18 = VAR_7;
  *VAR_19 = VAR_7;



  VAR_24 = FUNC_1(VAR_16, VAR_15->state.conn_cache,
                                      &VAR_25);
  if(VAR_24) {

    struct curl_llist_element *VAR_26;

    FUNC_9(VAR_15, "Found bundle for host %s: %p [%s]\n",
          VAR_25, (void *)VAR_24, (VAR_24->multiuse == VAR_0 ?
                                       "can multiplex" : "serially"));


    if(VAR_23) {
      if(VAR_24->multiuse == VAR_2) {
        if(VAR_15->set.pipewait) {
          FUNC_9(VAR_15, "Server doesn't support multiplex yet, wait\n");
          *VAR_19 = VAR_13;
          FUNC_2(VAR_15);
          return VAR_7;
        }

        FUNC_9(VAR_15, "Server doesn't support multiplex (yet)\n");
        VAR_23 = VAR_7;
      }
      if((VAR_24->multiuse == VAR_0) &&
         !FUNC_3(VAR_15->multi)) {
        FUNC_9(VAR_15, "Could multiplex, but not asked to!\n");
        VAR_23 = VAR_7;
      }
      if(VAR_24->multiuse == VAR_1) {
        FUNC_9(VAR_15, "Can not multiplex, even if we wanted to!\n");
        VAR_23 = VAR_7;
      }
    }

    VAR_26 = VAR_24->conn_list.head;
    while(VAR_26) {
      bool VAR_27 = VAR_7;
      size_t VAR_28;





      VAR_20 = VAR_26->ptr;
      VAR_26 = VAR_26->next;

      if(VAR_20->bits.connect_only)

        continue;

      VAR_28 = FUNC_0(VAR_20) &&
        (VAR_24->multiuse == VAR_0);

      if(VAR_23) {
        if(VAR_20->bits.protoconnstart && VAR_20->bits.close)
          continue;
      }
      else {
        if(VAR_28) {


          continue;
        }

        if(FUNC_4()) {


          if(!VAR_20->ip_addr_str[0]) {
            FUNC_9(VAR_15,
                  "Connection #%ld is still name resolving, can't reuse\n",
                  VAR_20->connection_id);
            continue;
          }
        }

        if((VAR_20->sock[VAR_8] == VAR_6) ||
           VAR_20->bits.close) {
          if(!VAR_20->bits.close)
            VAR_22 = VAR_13;


          FUNC_9(VAR_15, "Connection #%ld isn't open enough, can't reuse\n",
                VAR_20->connection_id);
          continue;
        }
      }
      if((VAR_16->handler->flags&VAR_11) !=
         (VAR_20->handler->flags&VAR_11))

        if(FUNC_8(VAR_20->handler->protocol) !=
           VAR_16->handler->protocol || !VAR_20->tls_upgraded)

          continue;

      if(VAR_16->bits.httpproxy != VAR_20->bits.httpproxy ||
         VAR_16->bits.socksproxy != VAR_20->bits.socksproxy)
        continue;

      if(VAR_16->bits.socksproxy && !FUNC_10(&VAR_16->socks_proxy,
                                                        &VAR_20->socks_proxy))
        continue;

      if(VAR_16->bits.conn_to_host != VAR_20->bits.conn_to_host)


        continue;

      if(VAR_16->bits.conn_to_port != VAR_20->bits.conn_to_port)


        continue;

      if(VAR_16->bits.httpproxy) {
        if(!FUNC_10(&VAR_16->http_proxy, &VAR_20->http_proxy))
          continue;

        if(VAR_16->bits.tunnel_proxy != VAR_20->bits.tunnel_proxy)
          continue;

        if(VAR_16->http_proxy.proxytype == VAR_5) {

          if(VAR_16->handler->flags&VAR_11) {

            if(!FUNC_5(&VAR_16->proxy_ssl_config,
                                        &VAR_20->proxy_ssl_config))
              continue;
            if(VAR_20->proxy_ssl[VAR_8].state != VAR_14)
              continue;
          }
          else {
            if(!FUNC_5(&VAR_16->ssl_config,
                                        &VAR_20->ssl_config))
              continue;
            if(VAR_20->ssl[VAR_8].state != VAR_14)
              continue;
          }
        }
      }

      if(!VAR_23 && VAR_20->data)


        continue;

      if(FUNC_0(VAR_20) && VAR_20->data &&
         (VAR_20->data->multi != VAR_16->data->multi))


        continue;

      if(VAR_16->localdev || VAR_16->localport) {
        if((VAR_20->localport != VAR_16->localport) ||
           (VAR_20->localportrange != VAR_16->localportrange) ||
           (VAR_16->localdev &&
            (!VAR_20->localdev || FUNC_12(VAR_20->localdev, VAR_16->localdev))))
          continue;
      }

      if(!(VAR_16->handler->flags & VAR_10)) {


        if(FUNC_12(VAR_16->user, VAR_20->user) ||
           FUNC_12(VAR_16->passwd, VAR_20->passwd)) {

          continue;
        }
      }

      if(!VAR_16->bits.httpproxy || (VAR_16->handler->flags&VAR_11) ||
         VAR_16->bits.tunnel_proxy) {




        if((FUNC_11(VAR_16->handler->scheme, VAR_20->handler->scheme) ||
            (FUNC_8(VAR_20->handler->protocol) ==
             VAR_16->handler->protocol && VAR_20->tls_upgraded)) &&
           (!VAR_16->bits.conn_to_host || FUNC_11(
            VAR_16->conn_to_host.name, VAR_20->conn_to_host.name)) &&
           (!VAR_16->bits.conn_to_port ||
             VAR_16->conn_to_port == VAR_20->conn_to_port) &&
           FUNC_11(VAR_16->host.name, VAR_20->host.name) &&
           VAR_16->remote_port == VAR_20->remote_port) {



          if(VAR_16->handler->flags & VAR_11) {


            if(!FUNC_5(&VAR_16->ssl_config,
                                        &VAR_20->ssl_config)) {
              FUNC_6(FUNC_9(VAR_15,
                           "Connection #%ld has different SSL parameters, "
                           "can't reuse\n",
                           VAR_20->connection_id));
              continue;
            }
            if(VAR_20->ssl[VAR_8].state != VAR_14) {
              VAR_22 = VAR_13;
              FUNC_6(FUNC_9(VAR_15,
                           "Connection #%ld has not started SSL connect, "
                           "can't reuse\n",
                           VAR_20->connection_id));
              continue;
            }
          }
          VAR_27 = VAR_13;
        }
      }
      else {


        VAR_27 = VAR_13;
      }

      if(VAR_27) {
        if(VAR_23) {



          if(!VAR_28) {

            VAR_21 = VAR_20;
            break;
          }
          VAR_21 = VAR_20;
          FUNC_9(VAR_15, "Multiplexed connection found!\n");
          break;
        }
        else {

          VAR_21 = VAR_20;
          break;
        }
      }
    }
  }

  if(VAR_21) {

    VAR_21->data = VAR_15;
    FUNC_2(VAR_15);
    *VAR_17 = VAR_21;
    return VAR_13;
  }
  FUNC_2(VAR_15);

  if(VAR_22 && VAR_15->set.pipewait) {
    FUNC_9(VAR_15,
          "Found pending candidate for reuse and CURLOPT_PIPEWAIT is set\n");
    *VAR_19 = VAR_13;
  }

  return VAR_7;
}
